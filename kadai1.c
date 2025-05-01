#include <stdio.h>

// �֐��̃v���g�^�C�v�錾
void find_highest_scores(
    int scores[5][2],
    int *max_math, int *max_physics,
    int *min_math, int *min_physics,
    double *avg_math, double *avg_physics,
    int *max_total_score_student,
    int *total_math, int *total_physics,
    int *max_total_score
);

int main() {
    int scores[5][2] = {
        {72, 48},
        {88, 39},
        {72, 91},
        {81, 82},
        {68, 78}
    };

    int max_math, max_physics, min_math, min_physics;
    double avg_math, avg_physics;
    int max_total_score_student;
    int total_math, total_physics;
    int max_total_score;

    find_highest_scores(scores, &max_math, &max_physics, &min_math, &min_physics,
                        &avg_math, &avg_physics, &max_total_score_student,
                        &total_math, &total_physics, &max_total_score);

    // �o�́i���v�_�����ł��������k�̏o�͍͂폜�ς݁j
    printf("数学の最高点数: %d\n", max_math);
    printf("物理の最高点数: %d\n", max_physics);
    printf("数学の最小点数: %d\n", min_math);
    printf("物理の最小点数: %d\n", min_physics);
    printf("数学の平均点: %.2f\n", avg_math);
    printf("物理の平均点: %.2f\n", avg_physics);
    printf("合計の最大得点: %d\n", max_total_score);

    return 0;
}

void find_highest_scores(
    int scores[5][2],
    int *max_math, int *max_physics,
    int *min_math, int *min_physics,
    double *avg_math, double *avg_physics,
    int *max_total_score_student,
    int *total_math, int *total_physics,
    int *max_total_score
) {
    *max_math = scores[0][0];
    *min_math = scores[0][0];
    *max_physics = scores[0][1];
    *min_physics = scores[0][1];

    *total_math = 0;
    *total_physics = 0;
    *max_total_score = scores[0][0] + scores[0][1];
    *max_total_score_student = 0;

    for (int i = 0; i < 5; i++) {
        int math = scores[i][0];
        int physics = scores[i][1];
        int total = math + physics;

        if (math > *max_math) *max_math = math;
        if (math < *min_math) *min_math = math;

        if (physics > *max_physics) *max_physics = physics;
        if (physics < *min_physics) *min_physics = physics;

        *total_math += math;
        *total_physics += physics;

        if (total > *max_total_score) {
            *max_total_score = total;
            *max_total_score_student = i;
        }
    }

    *avg_math = *total_math / 5.0;
    *avg_physics = *total_physics / 5.0;
}
