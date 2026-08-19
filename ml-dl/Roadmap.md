# 🧠 2-Month Machine Learning Foundation Roadmap

## 🎯 Goal

Build a strong ML foundation in ~2 months by combining:

- Vizuara → mathematical foundations
- Krish Naik → practical ML + implementation
- From-scratch implementations
- sklearn implementations
- Small projects
- College syllabus alignment
- Interview-level understanding

The goal is **NOT** to simply finish both playlists.

The goal is to reach a point where I can:
- Explain the algorithm intuitively
- Explain the mathematics behind it
- Implement the basic version from scratch
- Use sklearn correctly
- Understand when/why to use it
- Explain limitations and trade-offs
- Answer interview questions about it


# PHASE 0 — Prerequisites

## Skip beginner material

I already know Python/NumPy/Pandas reasonably well.

So I do NOT need to sequentially watch:

- Krish Naik Python basics
- Vizuara Python basics
- Vizuara Python OOP/classes
- Basic NumPy/Pandas introductions

I can return to these later if I encounter a gap.


# PHASE 1 — VIZUARA 1–11
## Linear Algebra Foundation

Watch Vizuara:

- [ ] Lecture 1 — Foundations for ML: Linear Algebra, Probability, Calculus, Optimization
- [ ] Lecture 2 — Vector, Transformation, Span, Basis
- [ ] Lecture 3 — Linear Transformation as Matrix Multiplication
- [ ] Lecture 4 — 3D Linear Transformation
- [ ] Lecture 5 — Product of 2 Matrices = Composite Transformation
- [ ] Lecture 6 — Physical Intuition for Determinants
- [ ] Lecture 7 — Transformation with Non-Square Matrices
- [ ] Lecture 8 — Matrix Inverse
- [ ] Lecture 9 — Dot Product and Transformation
- [ ] Lecture 10 — Eigenvalues and Eigenvectors
- [ ] Lecture 11 — Probability and Statistics Introduction

### Concepts to understand

- [ ] Vectors
- [ ] Matrices
- [ ] Matrix multiplication
- [ ] Dot product
- [ ] Linear transformations
- [ ] Span
- [ ] Basis
- [ ] Determinants
- [ ] Matrix inverse
- [ ] Non-square matrices
- [ ] Eigenvalues
- [ ] Eigenvectors

### STOP VIZUARA HERE.

Do NOT continue through the entire playlist yet.

Switch to Krish Naik.


# PHASE 2 — KRISH NAIK
## Regression + Initial ML Concepts

Start around the Linear Regression section.

### Regression

- [ ] Linear Regression — In-depth Maths Intuition
- [ ] Ridge and Lasso Regression — Intuition
- [ ] Ridge and Lasso using Python/sklearn
- [ ] Multiple Linear Regression
- [ ] Multicollinearity

### Model behaviour

- [ ] Bias and Variance
- [ ] Overfitting
- [ ] Underfitting
- [ ] R²
- [ ] Adjusted R²

### Practical work

For Linear Regression:

- [ ] Understand the hypothesis
- [ ] Understand the loss function
- [ ] Understand the role of parameters
- [ ] Understand gradient descent conceptually
- [ ] Implement Linear Regression from scratch using NumPy
- [ ] Implement Linear Regression using sklearn
- [ ] Compare the results


# PHASE 3 — VIZUARA 12–16
## Probability + Statistics Foundation

Return to Vizuara.

- [ ] Lecture 12 — Conditional Probability / Probability & Statistics
- [ ] Lecture 13 — Bayes Theorem
- [ ] Lecture 14 — Probability Distributions
- [ ] Lecture 15 — Null & Alternative Hypothesis
- [ ] Lecture 16 — Naive Bayes + Model Evaluation + Confusion Matrix

### Concepts to understand

- [ ] Probability
- [ ] Conditional probability
- [ ] Bayes theorem
- [ ] Probability distributions
- [ ] Hypothesis testing basics
- [ ] Confusion matrix
- [ ] Classification evaluation


# PHASE 4 — KRISH NAIK
## Classification + Trees + KNN + Ensembles

Return to Krish Naik.

## Logistic Regression

- [ ] Logistic Regression — Part 1
- [ ] Logistic Regression — Part 2
- [ ] Logistic Regression — Multiclass / One-vs-Rest

Understand:

- [ ] Sigmoid function
- [ ] Decision boundary
- [ ] Classification probability
- [ ] Loss function
- [ ] Regularization
- [ ] Multiclass classification

Implement:

- [ ] Logistic Regression from scratch
- [ ] Logistic Regression using sklearn


## Decision Trees

- [ ] Entropy
- [ ] Information Gain
- [ ] Gini Impurity
- [ ] Numerical feature splitting
- [ ] Decision Tree implementation/practical material
- [ ] Post-pruning / overfitting

Understand:

- [ ] How a tree chooses a split
- [ ] Entropy
- [ ] Information gain
- [ ] Gini impurity
- [ ] Decision boundaries
- [ ] Overfitting
- [ ] Pruning
- [ ] Continuous features


## Classification Metrics

- [ ] Accuracy
- [ ] Precision
- [ ] Recall
- [ ] Sensitivity
- [ ] Specificity
- [ ] Confusion Matrix
- [ ] ROC Curve
- [ ] AUC
- [ ] Multiclass metrics
- [ ] Classification threshold


## KNN

- [ ] KNN intuition
- [ ] KNN implementation
- [ ] Euclidean distance
- [ ] Manhattan distance
- [ ] Choosing K
- [ ] KNN decision boundary
- [ ] KNN classification
- [ ] KNN regression

Implement:

- [ ] KNN from scratch


## Ensemble Learning

- [ ] Bagging
- [ ] Random Forest
- [ ] Handling imbalanced datasets

Understand:

- [ ] Bootstrap sampling
- [ ] Bagging
- [ ] Random Forest
- [ ] Why Random Forest reduces variance
- [ ] Feature randomness
- [ ] Class imbalance


# PHASE 5 — VIZUARA 17–28
## Calculus + Optimization

Now return to Vizuara.

This section is MUCH more useful after already seeing regression, logistic regression and regularization.

- [ ] Lecture 17 — Introduction to Calculus for ML
- [ ] Lecture 18 — Chain Rule
- [ ] Lecture 19 — Integral Calculus
- [ ] Lecture 20 — Partial Derivatives and Gradient Descent
- [ ] Lecture 21 — Gradient Descent
- [ ] Lecture 22 — Optimization
- [ ] Lecture 23 — Stochastic Gradient Descent
- [ ] Lecture 24 — Momentum-based Gradient Descent
- [ ] Lecture 25 — RMSProp
- [ ] Lecture 26 — Adam Optimizer
- [ ] Lecture 27 — L1 and L2 Regularization

### Concepts to understand

- [ ] Derivatives
- [ ] Partial derivatives
- [ ] Chain rule
- [ ] Gradients
- [ ] Gradient descent
- [ ] Learning rate
- [ ] Local minima
- [ ] SGD
- [ ] Momentum
- [ ] RMSProp
- [ ] Adam
- [ ] L1 regularization
- [ ] L2 regularization

### Important connection

Understand:

    Derivative
        ↓
    Gradient
        ↓
    Gradient Descent
        ↓
    SGD
        ↓
    Momentum
        ↓
    RMSProp
        ↓
    Adam
        ↓
    Neural Networks / Backpropagation


# PHASE 6 — KRISH NAIK
## Naive Bayes + SVM

Return to Krish Naik.


## Naive Bayes

- [ ] Bayes theorem
- [ ] Naive Bayes intuition
- [ ] Naive Bayes classifier
- [ ] Naive Bayes on text/NLP

Understand:

- [ ] Conditional probability
- [ ] Independence assumption
- [ ] Prior
- [ ] Likelihood
- [ ] Posterior
- [ ] Classification

Implement:

- [ ] Naive Bayes from scratch
- [ ] Naive Bayes using sklearn


## Support Vector Machines

- [ ] SVM basic intuition
- [ ] Mathematical intuition behind SVM
- [ ] SVM kernels
- [ ] Polynomial kernel
- [ ] RBF kernel
- [ ] sklearn implementation

Understand:

- [ ] Margin
- [ ] Maximum-margin classifier
- [ ] Support vectors
- [ ] Hard margin
- [ ] Soft margin
- [ ] C parameter
- [ ] Kernel trick
- [ ] Linear vs nonlinear decision boundary

For college:

- [ ] Understand primal problem
- [ ] Understand Lagrangian dual
- [ ] Understand dual formulation conceptually
- [ ] Understand hard-margin SVM
- [ ] Understand soft-margin SVM
- [ ] Understand linear/polynomial kernels


# PHASE 7 — KRISH NAIK
## Boosting + XGBoost

Continue with:

- [ ] Gradient Boosting — intuition
- [ ] Gradient Boosting — mathematical intuition
- [ ] XGBoost Classification — mathematical intuition
- [ ] XGBoost Regression
- [ ] AdaBoost

Understand:

- [ ] Weak learners
- [ ] Sequential learning
- [ ] Residual/error correction
- [ ] Gradient boosting
- [ ] AdaBoost
- [ ] XGBoost
- [ ] Regularization in boosting
- [ ] Learning rate
- [ ] Number of estimators
- [ ] Tree depth

Also understand:

- [ ] Bagging vs Boosting
- [ ] Random Forest vs Gradient Boosting
- [ ] Gradient Boosting vs XGBoost


# PHASE 8 — KRISH NAIK
## Unsupervised Learning

Continue with:

- [ ] K-Means intuition
- [ ] Hierarchical Clustering
- [ ] DBSCAN
- [ ] Silhouette Score
- [ ] Curse of Dimensionality
- [ ] PCA intuition
- [ ] PCA implementation using sklearn

### K-Means

Understand:

- [ ] Centroids
- [ ] Assignment step
- [ ] Update step
- [ ] Convergence
- [ ] Choosing K
- [ ] Elbow method
- [ ] Silhouette score

Implement:

- [ ] K-Means from scratch
- [ ] K-Means using sklearn


### Hierarchical Clustering

Understand:

- [ ] Agglomerative clustering
- [ ] Divisive clustering
- [ ] Distance measures
- [ ] Dendrogram
- [ ] Linkage


### PCA

Understand:

- [ ] Dimensionality reduction
- [ ] Variance
- [ ] Principal components
- [ ] Eigenvectors
- [ ] Eigenvalues
- [ ] Projection
- [ ] Reconstruction

Implement:

- [ ] PCA conceptually/from scratch
- [ ] PCA using sklearn


# PHASE 9 — SUPPLEMENT
## EM + Gaussian Mixture Models

The two main playlists do NOT fully cover everything required by the college syllabus here.

Study separately:

- [ ] Expectation Maximization
- [ ] Gaussian Mixture Models
- [ ] E-step
- [ ] M-step
- [ ] Relationship between K-Means and EM
- [ ] K-Means as a special case / limiting interpretation of EM
- [ ] GMM clustering

Understand conceptually rather than spending excessive time on derivations.


# END OF FIRST ~2 MONTHS

By the end of this phase, I should be able to independently explain:

## Mathematical Foundation

- [ ] Vectors
- [ ] Matrices
- [ ] Matrix multiplication
- [ ] Dot products
- [ ] Linear transformations
- [ ] Eigenvalues/eigenvectors
- [ ] Probability
- [ ] Conditional probability
- [ ] Bayes theorem
- [ ] Probability distributions
- [ ] Statistics
- [ ] Derivatives
- [ ] Partial derivatives
- [ ] Chain rule
- [ ] Gradients
- [ ] Gradient Descent
- [ ] SGD
- [ ] Momentum
- [ ] RMSProp
- [ ] Adam
- [ ] Regularization


## Classical ML

- [ ] Linear Regression
- [ ] Logistic Regression
- [ ] Ridge Regression
- [ ] Lasso Regression
- [ ] KNN
- [ ] Decision Trees
- [ ] Random Forest
- [ ] Naive Bayes
- [ ] SVM
- [ ] AdaBoost
- [ ] Gradient Boosting
- [ ] XGBoost
- [ ] K-Means
- [ ] Hierarchical Clustering
- [ ] DBSCAN
- [ ] PCA
- [ ] GMM
- [ ] EM


## Evaluation

- [ ] Accuracy
- [ ] Precision
- [ ] Recall
- [ ] Sensitivity
- [ ] Specificity
- [ ] F1 Score
- [ ] Confusion Matrix
- [ ] ROC
- [ ] AUC
- [ ] Cross Validation
- [ ] Bias-Variance
- [ ] Overfitting
- [ ] Underfitting
- [ ] Data Leakage
- [ ] Class Imbalance


# HOW TO STUDY EACH ALGORITHM

Do NOT simply:

    Watch video
        ↓
    Watch next video
        ↓
    Watch next video


Instead:

    1. Learn the intuition
            ↓
    2. Understand the mathematics
            ↓
    3. Explain it without notes
            ↓
    4. Implement it from scratch
            ↓
    5. Implement/use sklearn
            ↓
    6. Apply it to a dataset
            ↓
    7. Evaluate the model
            ↓
    8. Understand failure cases
            ↓
    9. Understand hyperparameters
            ↓
    10. Answer interview questions


# FROM-SCRATCH IMPLEMENTATIONS

I should NOT implement every algorithm from scratch.

Prioritize:

- [ ] Linear Regression — NumPy
- [ ] Logistic Regression — NumPy
- [ ] KNN — Python/NumPy
- [ ] Decision Tree — Python
- [ ] K-Means — NumPy
- [ ] Naive Bayes — Python
- [ ] PCA — NumPy
- [ ] Gradient Descent — NumPy
- [ ] Small Neural Network — NumPy

For the remaining algorithms, understand the internals and use sklearn/appropriate libraries.


# PROJECT RULE

Do NOT wait until the end of the roadmap to build projects.

For every major section:

    Learn
      ↓
    Implement
      ↓
    Apply
      ↓
    Explain


## Project 1 — Classical ML

Build an end-to-end classification project.

Example:

    Credit Risk Prediction

    Raw Dataset
        ↓
    EDA
        ↓
    Data Cleaning
        ↓
    Feature Engineering
        ↓
    Train / Validation / Test
        ↓
    Baseline
        ↓
    Logistic Regression
        ↓
    Decision Tree
        ↓
    Random Forest
        ↓
    XGBoost
        ↓
    Hyperparameter Tuning
        ↓
    Evaluation
        ↓
    Explainability
        ↓
    Deployment


## Project 2 — Unsupervised ML

Example:

    Customer Segmentation

    Dataset
        ↓
    EDA
        ↓
    Scaling
        ↓
    K-Means
        ↓
    Elbow / Silhouette
        ↓
    Hierarchical Clustering
        ↓
    PCA
        ↓
    Interpretation


# CORE PRINCIPLE

Vizuara = WHY / MATHEMATICAL FOUNDATION

Krish Naik = HOW / PRACTICAL ML

My implementations = DO I ACTUALLY KNOW IT?


The learning loop should be:

    Vizuara
        ↓
    Mathematical understanding
        ↓
    Krish Naik
        ↓
    Practical ML understanding
        ↓
    Code it myself
        ↓
    Use sklearn
        ↓
    Apply to a dataset
        ↓
    Explain aloud
        ↓
    Interview questions


# FINAL SEQUENCE

    VIZUARA 1–11
    Linear Algebra
            ↓
    KRISH NAIK
    Regression
            ↓
    VIZUARA 12–16
    Probability + Statistics
            ↓
    KRISH NAIK
    Logistic Regression
    Decision Trees
    Metrics
    KNN
    Random Forest
            ↓
    VIZUARA 17–27
    Calculus + Optimization
            ↓
    KRISH NAIK
    Naive Bayes
    SVM
    AdaBoost
    Gradient Boosting
    XGBoost
            ↓
    KRISH NAIK
    K-Means
    Hierarchical Clustering
    DBSCAN
    PCA
            ↓
    SUPPLEMENT
    EM + GMM
            ↓
    CLASSICAL ML FOUNDATION COMPLETE